#import <UIKit/UIKit.h>

#import <PBFrameworkUIStreamDetails/YMSPhotoPickerViewController.h>

@interface POIView : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, UIScrollViewDelegate, UINavigationControllerDelegate, UIImagePickerControllerDelegate, YMSPhotoPickerViewControllerDelegate>

// NavBar
@property (nonatomic) IBOutlet UIView *vAboveSafe;
@property (nonatomic) IBOutlet UIView *vNavigation;
@property (nonatomic) IBOutlet UILabel *lblTitle;
@property (nonatomic) IBOutlet UIButton *btnBack;
-(IBAction) pressBack:(id)sender;

// Display
@property (nonatomic) UIView *vLoading;
@property (nonatomic) IBOutlet UICollectionView *colvPeople;

// Data Source
@property (nonatomic) NSMutableArray *arrayPOIStreams;

// Drag to refresh
@property (nonatomic) BOOL hasDoneInitialLayout;
@property (nonatomic) BOOL dragRefreshAvailable;
@property (nonatomic) NSLock *lockDragRefresh;

// POI View
@property (nonatomic) IBOutlet UIImageView *imgFace;
@property (nonatomic) IBOutlet UILabel *lblEmpty;
@property (nonatomic) NSDictionary *poi;
@property (nonatomic) NSArray *poiArray;
@property (nonatomic) IBOutlet UIButton *btnEdit;
@property (nonatomic) IBOutlet UIButton *btnDelete;
-(IBAction) pressEdit:(id)sender;
-(IBAction) pressDelete:(id)sender;

@end
