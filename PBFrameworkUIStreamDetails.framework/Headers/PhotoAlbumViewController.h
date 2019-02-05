#import <UIKit/UIKit.h>
#import <MapKit/MapKit.h>

#import "CustomStreamCoverMenu.h"
#import "CustomCoverCameraViewController.h"
#import "ChooseImageFromStream.h"
#import "StreamSortOptions.h"
#import "ScrollDateIndicator.h"
#import "OfflineBanner.h"
#import "OptInView.h"
#import "OptInModeSelectionView.h"
#import "YMSPhotoPickerViewController.h"
#import "UIViewController+YMSPhotoHelper.h"
#import "OneButtonMenu.h"
#import "CustomParkMapCell.h"

#import <TOCropViewController/TOCropViewController.h>

#import "PBPodUIImageCarousel_UmbHeader.h"
#import "PBPodUILibraries_UmbHeader.h"

@import Photos;

@class StreamSortOptions;
@class OptInModeSelectionView;
@class PBVideoUploadsBanner;

@class LocationServicesDeniedView;

@protocol PhotoAlbumViewControllerDelegate <NSObject>
-(void)addViewPhotoController:(id)person fromStream : (NSString *)album;
-(void)addNewPersonView:(id)person;
-(void)addExistingPersonView:(id)person;
@end

@interface PhotoAlbumViewController : UIViewController<UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, UIScrollViewDelegate, MKMapViewDelegate, CustomStreamCoverMenuDelegate, CustomCoverCameraDelegate, TOCropViewControllerDelegate, UIImagePickerControllerDelegate, UINavigationControllerDelegate, ChooseImageFromStreamDelegate, OptInViewDelegate, OptInModeSelectionDelegate, YMSPhotoPickerViewControllerDelegate, OneButtonMenuDelegate, CustomParkMapCellProtocol> {
    IBOutlet UIView *viewNavigation;
    IBOutlet UIView *viewNavigationSafeArea;
    
    IBOutlet UIView *viewPopUp;
    
    IBOutlet UILabel *lblViewingSpector;
    IBOutlet UIView *viewSpector;
    IBOutlet UIView *viewOneButtonOpener;
    IBOutlet UIButton *btnOneButtonMenu;
    
    IBOutlet UIView *viewStopCamAudiMain;
    IBOutlet NSLayoutConstraint *heightStopCamAudiMain;
    IBOutlet NSLayoutConstraint *heightUploadProgressView;
    IBOutlet NSLayoutConstraint *widthEditStreamButton;
    IBOutlet UILabel *lblUploadProgress;
    IBOutlet UIButton *btnChooseUploads;
    IBOutlet UIView *vChooseUploadsLoadingCircle;
    
    IBOutlet UIImageView *imgBGSpector;
    
    // Action Buttons
    IBOutlet UIButton *btnStop;
    IBOutlet UIButton *btnAudience;
    IBOutlet UIButton *btnCamera;
    IBOutlet UILabel *lblStop;
    IBOutlet UILabel *lblCamera;
    IBOutlet UIImageView *imgStop;
    
    // Custom Covers
    CustomStreamCoverMenu *customCoverMenu;
    NSString *customCoverType;
}
@property (nonatomic) PHFetchResult *recentFetch;
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *heightVideosToUploadBanner;
@property (weak, nonatomic) IBOutlet UIView *videosToUpload;
@property (nonatomic) PBVideoUploadsBanner *vidUploadsBanner;
@property (nonatomic) BOOL isNavigateUser;
@property (nonatomic) BOOL hasLoadedFromServer;
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *hightCheckManage;
@property (retain,nonatomic) IBOutlet UICollectionView *colvMainForData;
@property (nonatomic) NSString *albumID;
@property (nonatomic) NSString *albumSharedID;
@property (nonatomic) NSString *albumName;
@property (nonatomic) NSString *albumOwnerId;
@property (nonatomic) NSString *heroImageFilename;
@property (nonatomic) NSString *heroImageCreationDate;
@property (nonatomic) NSString *heroImageAssetId;
@property (nonatomic) NSString *heroImageOwnerOfAssetId;
@property (nonatomic) NSString *albumCompareString;
@property (nonatomic) NSString *commentIdForShowing;
@property (nonatomic) NSString *regCode;
@property (nonatomic) int compareCount;
@property (nonatomic) BOOL isLoadingS3Links;
@property (nonatomic) NSMutableIndexSet *indexSetExpiredRanges;
@property (nonatomic) NSTimer *timerCheckRangesForExpiredS3;
@property (nonatomic) BOOL hasLoadedHeroImage;
@property (nonatomic) BOOL isInBlackout;
@property (nonatomic) NSDictionary *album;
@property (nonatomic) NSDictionary *host;
@property (nonatomic) NSDate *albumStartDate;
@property (nonatomic) NSDate *albumEndDate;
@property (nonatomic) NSDate *dateEnterBackground;
@property (nonatomic) BOOL isPrivate;
@property (nonatomic) BOOL didLayout;
@property (nonatomic) BOOL isStream;
@property (nonatomic) BOOL isHost;
@property (nonatomic) BOOL isCollaborating;
@property (nonatomic) BOOL isInvitedToContribute;
@property (nonatomic) BOOL hasRejectedCollaboration;
@property (nonatomic) BOOL hasAcceptedCollaboration;
@property (nonatomic) BOOL isActive;
//@property (nonatomic) NSArray *theArrayToUse;
@property (nonatomic) NSMutableArray *sectionsNeedReload;
@property (nonatomic) NSMutableArray *fromSocketAdditions;
@property (nonatomic) NSMutableArray *fromSocketDeletions;
@property (nonatomic) int numberPhotos;
@property (nonatomic) int totalNumberPhotos;
@property (nonatomic) int tagPeople;
@property (nonatomic) int tagImages;
@property (nonatomic) int tagHero;

@property (nonatomic) int sectionAudCameraStop;
@property (nonatomic) int sectionInvite;
@property (nonatomic) int sectionAnnounce;
@property (nonatomic) int sectionHero;
@property (nonatomic) int sectionPeople;
@property (nonatomic) int sectionMap;
@property (nonatomic) int sectionRecentHighlights;
@property (nonatomic) int sectionImages;

@property (nonatomic) int peopleInvited;
@property (nonatomic) int peopleViewed;
@property (retain,nonatomic) NSMutableDictionary *imgHero;
/** @property arrayPeopleSeen
 *   @brief It contains array of dictionaries.
 *   Exapmle: @{@"peopleCategoryName" : "listOfPeopleInThisCategory"} **/
@property (nonatomic) NSMutableArray *arrayPeopleSeen;
@property (nonatomic) NSMutableArray *arrayRecentHighlights;
@property (nonatomic) NSMutableArray *arrayGalleryAll;
@property (nonatomic) NSMutableArray *arrayGalleryMine;
@property (nonatomic) NSMutableArray *arrayGalleryHighlights;
@property (nonatomic) NSMutableArray *arrayGalleryOthers;
@property (nonatomic) NSMutableArray *arrayLocations;
@property (nonatomic) NSMutableArray *arrayRecipients;
@property (nonatomic) NSMutableDictionary *queueS3Bucket;
@property (nonatomic) NSMutableArray *queueS3InProgress;
@property (nonatomic, assign) BOOL queueDirty;
@property (assign,nonatomic) BOOL showAllGalleryPhotos;
@property (assign,nonatomic) BOOL showMineGalleryPhotos;
@property (assign,nonatomic) BOOL showHighlightsGalleryPhotos;
@property (assign,nonatomic) BOOL showOthersGalleryPhotos;
@property (assign,nonatomic) BOOL isFirstAutoTabChange;
@property (nonatomic) NSTimer *streamUpdateTimer;
@property (nonatomic) NSTimer *popupTimer;
@property (nonatomic) NSTimer *contributionTimer;
@property (nonatomic) NSTimer *timerCheckChangesTwo;
@property (nonatomic) NSTimer *timerCheckChangesFive;
@property (nonatomic) NSTimer *timerBlackoutChecker;
@property (nonatomic) int tickCountBlackoutChecker;
@property (nonatomic) UIView *viewPopup;
@property (nonatomic) UIView *viewPoweredByPB;
@property (atomic) NSRecursiveLock *dragRefreshLock;
@property (atomic) NSRecursiveLock *lockRefreshArray;
@property (atomic) NSLock *lockGetImagesFromDB;
@property (atomic) NSLock *lockLoadVisibleCells;
@property (atomic) NSLock *lockRefreshingFromSocket;
@property (nonatomic) BOOL dragRefreshAvailable;
@property (nonatomic) LoadingView *viewLoading;

@property (nonatomic) BOOL showContributorInvite;
@property (nonatomic) BOOL contributorInviteDismissed;
@property (nonatomic) NSString* strAlert;
@property (nonatomic) NSString* alertBackground;
@property (nonatomic) NSString* assetIdToShowOnLoad;
@property (nonatomic) NSString* showOnLoadFilename;
@property (nonatomic) NSString* showOnLoadCreationDate;

@property (retain,nonatomic) IBOutlet UILabel *lblTitle;
@property (retain,nonatomic) IBOutlet UILabel *lblTimeLeft;
@property (retain,nonatomic) IBOutlet UIButton *btnEditParams;
@property (retain,nonatomic) IBOutlet UIButton *btnShare;
@property (retain,nonatomic) IBOutlet UIButton *btnBack;
@property (nonatomic) id <PhotoAlbumViewControllerDelegate> delegate;
@property (nonatomic) CGPoint totalTranslation;
@property (nonatomic) NSMutableString *locationCities;
@property (nonatomic) BOOL dismissYourself;

@property (nonatomic) int newPhotosSinceLastDataReload;
@property (nonatomic) int uploadedSelectedPhotos;

@property (nonatomic) StreamSortOptions* sortOptionMenu;

@property (assign, nonatomic) BOOL isManualContribution;
// sorting
@property (nonatomic) NSString* sortingText;
@property (nonatomic) NSString* sortingImage;
@property (nonatomic) SortState currentSortState;
@property (nonatomic) ScrollDateIndicator *scrollDateIndicator;
@property (nonatomic) BOOL disableScrollIndicator;
@property (nonatomic) BOOL allowScrollerUpdate;
@property (nonatomic) UIImageView *scrollDragger;
@property (nonatomic) CGFloat panVelocity_y;

// Map
@property (nonatomic) BOOL usePhotoMapMarkers;
@property (nonatomic) NSMutableDictionary *mapLocationCategoryData;
@property (nonatomic) NSMutableArray *arrayCategoriesMap;
@property (nonatomic) NSMutableArray *arrayCategoriesNonMap;
@property (nonatomic) MKMapRect originalMapRect; // For comparison purposes
@property (nonatomic) MKMapRect lastValidRect;
@property (nonatomic, assign) BOOL mapAutoPanActive;
@property (nonatomic) unsigned currentAnnotationFocused;
@property (nonatomic) NSTimer *timerAutoMapPan;
@property (nonatomic) MKMapView *currentMap;

// Reloading Expired Images
@property (nonatomic) BOOL isReloadingHighlightsForExpiredImages;
@property (nonatomic) BOOL isReloadingPhotosForExpiredImages;
@property (nonatomic) float expiredHighlightsReloadLength;

- (void) timerTick;
- (void) beContributorAction;
- (void) addImageDetailView:(NSMutableArray*) filenames selected:(NSDictionary*)selectedImage locationName:(NSString*)location subtitle:(NSString*)subtitle shouldUnhideToolbarOnExit:(BOOL)shouldUnhideToolbarOnExit albumId:(NSString*)albumId albumName:(NSString*)albumName;
-(void) getAlbumInformation;
-(void) getAlbumInformationChanges;
-(void) pressStop;
-(void) showPopup:(NSString*) message;
-(IBAction)btnBack:(id)sender;
-(void) refreshWholeCollection;
-(void) setImageFavorite:(NSString*)assetId isFavorite:(BOOL)isFavoritePhoto;
-(void) showImage:(NSString*)assetId;
-(void) reloadIfChangesAfterTimer;
-(void) useImagesFromDatabase: (BOOL)forceRefresh;
-(void) refreshComments;
-(void) reloadCover;

// Smarter image displaying (true when the scrolling is slow enough to warrant loading of images)
@property (nonatomic) BOOL isLoadingImages;
@property (nonatomic) BOOL isProcessingSlowScrolling;
@property (nonatomic) BOOL isDraggingScrollIndicator;
@property (nonatomic) CGPoint lastOffset;
@property (nonatomic) NSTimeInterval lastOffsetCapture;
@property (nonatomic) OfflineBanner *offlineBanner;
@property (atomic) NSRecursiveLock *slowScrollingLock;

@property (nonatomic) BOOL isFavorite;
@property (nonatomic) int numberFavorites;
@property (nonatomic) int numberComments;
@property (nonatomic) NSDate *dateLastRefreshedComments;

@property (nonatomic) BOOL isFromUpcoming;
@property (nonatomic) BOOL isOptIn;

@property (retain,nonatomic) IBOutlet UIView *viewContributeOptIn;
@property (retain,nonatomic) IBOutlet UIView *viewHostOptInDisplay;
@property (retain,nonatomic) IBOutlet UIButton *btnContributeClose;

@property (retain,nonatomic) IBOutlet UILabel *lblHostInstTitle;
@property (retain,nonatomic) IBOutlet UILabel *lblHostInstTime;
@property (retain,nonatomic) IBOutlet UIView *viewHostInstProfileIcon;
@property (retain,nonatomic) IBOutlet UIImageView *imgHostInstProfileIcon;
@property (retain,nonatomic) IBOutlet UIView *viewHostInstStopIcon;

@property (retain,nonatomic) IBOutlet UIView *viewContributorOptInDisplay;
@property (retain,nonatomic) IBOutlet UIPageControl *pageControllerContributor;
@property (nonatomic) OptInView *vOptIn;
@property (nonatomic) OptInModeSelectionView *vOptInModeSelect;

//NavigationView
@property (nonatomic, assign) BOOL isNavigationViewHidden;

// Loading screen
-(void) hideLoading;

// Custom covers
@property (nonatomic) UIButton* btnCustomCover;
@property (nonatomic) TOCropViewController *cropController;
@property (nonatomic) UIImagePickerController *libraryPicker;
@property (nonatomic) PHAsset *assetFromLibrary;

@property (nonatomic) NSString *topHighlightAssetID;
@property (nonatomic) NSString *tmpCustomCoverAssetID;
@property (nonatomic) NSString *tmpCustomCoverFileName;
@property (nonatomic) NSString *tmpCustomCoverCreationDate;
@property (nonatomic) NSString *tmpCustomCoverImageURL;
@property (nonatomic) BOOL hasChangedHighlightSorting;
@property (nonatomic) SortState previousNonHighlightSort;
@property (nonatomic) LocationServicesDeniedView *lsdv;

// Camera / Audience bar
@property (nonatomic) IBOutlet UIView *viewCamera;
@property (nonatomic) IBOutlet UIView *viewAudience;
@property (nonatomic) IBOutlet UIView *viewStop;
@property (nonatomic) IBOutlet UIView *viewStopRightSeparator;
@property (nonatomic) IBOutlet NSLayoutConstraint *constraintViewStopWidth;
@property (nonatomic) IBOutlet NSLayoutConstraint *constraintViewAudienceWidth;

// Customization
@property (nonatomic) NSString *peopleHeaderText;

// Selection of highlights tab on first load
@property (nonatomic) BOOL hasSelectedHighlightsOnFirstLoad;

// Dan's crappier and faster to implement queue
@property (nonatomic) NSMutableArray *queueHighlightsJobs;
@property (nonatomic) BOOL queueHighlightsIsLoading;
@property (nonatomic) NSMutableArray *queueAllPhotosDoneOldToNew;
@property (nonatomic) NSMutableArray *queueAllPhotosDoneNewToOld;

// One Button Menu
@property (nonatomic) IBOutlet UIImageView *imgOneButtonMenuImage;
@property (nonatomic) IBOutlet UIView *vOneButtonMenuInnerContainer;
@property (nonatomic) IBOutlet UIImageView *imgOneButtonMenuInner;
-(IBAction)pressOneButtonMenu:(id)sender;
-(IBAction)pressMagicCoverVideoButton:(id)sender;

@property (nonatomic) UIImage *coverImage;
@property (nonatomic) NSString *coverImageURL;

// Folder information
@property (nonatomic) NSDictionary *folder;
// Folder logo
@property (nonatomic) IBOutlet UIImageView *imgFolderLogoInHeader;

// Cover image icon and video
@property (nonatomic) NSString *coverVideoURL;
@property (nonatomic) NSString *coverVideoIconURL;

@end
