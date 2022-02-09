#import <UIKit/UIKit.h>
#import <Photos/Photos.h>

NS_ASSUME_NONNULL_BEGIN

@protocol ChangeBGChooseBackgroundDelegate <NSObject>
- (void) pressBackToChangeBGImageSelection;
- (void) cancel;
@end

// For capturing drags not in the scrollview
@interface LargeScrollView : UIScrollView
    @property (nonatomic, nullable) UIView *viewForScrolling;
@end

@interface ChangeBGChooseBackgroundViewController : UIViewController <UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout, UIScrollViewDelegate>

// Delegate

@property (nonatomic, weak) id <ChangeBGChooseBackgroundDelegate> delegate;

// UI

@property (weak, nonatomic) IBOutlet UIView *navigationView;
@property (weak, nonatomic) IBOutlet UIView *navigationSafeArea;
@property (weak, nonatomic) IBOutlet UIView *poweredByPBView;

// Where the done/edited image goes
@property (weak, nonatomic) IBOutlet UIImageView *imgViewPreview;

// Image of placeholder with tuxguy and the set background
@property (weak, nonatomic) IBOutlet UIImageView *imgViewPlaceholder;
@property (weak, nonatomic) IBOutlet UIImageView *imgViewPlaceholderSuitman;

// View that contains the tuxguy and settable background
@property (weak, nonatomic) IBOutlet UIView *viewPreviewContainer;
@property (weak, nonatomic) IBOutlet UIImageView *imgViewPreviewBackground;
@property (weak, nonatomic) IBOutlet UIImageView *imgViewPreviewPersonPlaceholder;

// Views for transparent user image with chosen background view
@property (weak, nonatomic) IBOutlet UIView *viewContainerForTransparentUGC;
@property (weak, nonatomic) IBOutlet UIImageView *imgForTransparentUGC;
@property (weak, nonatomic) IBOutlet LargeScrollView *scrollForTransparentUGC;
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *constraintScrollViewAspectRatio;
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *constraintUGCBackgroundHeight;
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *constraintUGCBackgroundWidth;

@property (weak, nonatomic) IBOutlet NSLayoutConstraint *constraintBackgroundAspectRatio;
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *constraintBackgroundMaxHeight;

// View that contains the overlay logo if there is one
@property (weak, nonatomic) IBOutlet UIView *viewOverlayContainer;

// Divider view between CollectionView and the Adjustable UGC area
@property (weak, nonatomic) IBOutlet UIView *viewDivider;

// The list of possible backgrounds to use
@property (weak, nonatomic) IBOutlet UICollectionView *cvBackgrounds;

@property (weak, nonatomic) IBOutlet UIView *saveView;
@property (weak, nonatomic) IBOutlet UIView *saveBackgroundView;
@property (weak, nonatomic) IBOutlet UIView *backBGView;
@property (weak, nonatomic) IBOutlet UIView *backContainerView;
@property (weak, nonatomic) IBOutlet UIImageView *backIconImageView;

@property (weak, nonatomic) IBOutlet UIButton *saveButton;
@property (weak, nonatomic) IBOutlet UILabel *saveButtonLabel;
@property (weak, nonatomic) IBOutlet UIButton *backButton;
@property (weak, nonatomic) IBOutlet UIButton *exitButton;

@property (weak, nonatomic) IBOutlet UIView *loadingView;

// Params

@property (nonatomic) PHAsset *selectedUserImage;
@property (nonatomic) NSString *streamID;
@property (nonatomic) NSString *orientation;
@property (nonatomic) NSArray *backgroundImages;
@property (nonatomic, nullable) NSDictionary *selectedBackground;
@property (nonatomic, nullable) NSString *resultImageURL;
@property (nonatomic, nullable) NSString *transparentUGCImageURL;

//flag
@property (nonatomic) BOOL shouldSaveImageToCameraRoll;
@property (nonatomic) BOOL shouldOmitBackgroudPreview;
@property (nonatomic) BOOL shouldSaveAndUpload;
@property (nonatomic) BOOL shouldUseTransparentBGUserImage;

// timeout timer for connections
@property (nonatomic, nullable) NSTimer *timerTimeout;

// Helper params that just store the information about the overlay image position, so we don't have to recalc it ever
@property (nonatomic) NSString *imageURL;
@property (nonatomic) BOOL overlayIsLeft;
@property (nonatomic) BOOL overlayIsTop;
@property (nonatomic) BOOL overlayIsHCenter;
@property (nonatomic) BOOL overlayIsVCenter;
@property (nonatomic) CGFloat overlayXPos;
@property (nonatomic) CGFloat overlayYPos;
// How much the images are scaled down to fit into the views
@property (nonatomic) CGFloat scaleDown;

@end

NS_ASSUME_NONNULL_END
