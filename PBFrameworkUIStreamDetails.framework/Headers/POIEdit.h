#import <UIKit/UIKit.h>

#import <PBFrameworkUIStreamDetails/YMSPhotoPickerViewController.h>

@interface POIEdit : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, UIScrollViewDelegate, UINavigationControllerDelegate, UIImagePickerControllerDelegate, YMSPhotoPickerViewControllerDelegate>

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
@property (nonatomic) NSMutableArray *arrayPOISelfies;
@property (nonatomic) NSMutableArray *arrayPOIAdditionalSelfies;

// Drag to refresh
@property (nonatomic) BOOL hasDoneInitialLayout;
@property (nonatomic) BOOL dragRefreshAvailable;
@property (nonatomic) NSLock *lockDragRefresh;

// POI View
@property (nonatomic, weak) IBOutlet UIImageView *imgFace;
@property (nonatomic, weak) IBOutlet UILabel *lblEmpty;
@property (nonatomic) NSDictionary *poi;
@property (nonatomic, weak) IBOutlet UIButton *btnSave;
@property (nonatomic, weak) IBOutlet UIButton *btnDelete;

-(IBAction) pressSave:(id)sender;

// Picker
@property (nonatomic) YMSPhotoPickerViewController *ymsImagePicker;

@end
