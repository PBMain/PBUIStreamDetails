#import <UIKit/UIKit.h>

#import <PBFrameworkUIStreamDetails/YMSPhotoPickerViewController.h>

@interface POICreate : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, UIScrollViewDelegate, UINavigationControllerDelegate, UIImagePickerControllerDelegate, YMSPhotoPickerViewControllerDelegate>

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
@property (nonatomic) NSMutableArray *arrayPOIImages;

// POI Create
@property (nonatomic) IBOutlet UIButton *btnSave;
@property (nonatomic) IBOutlet UIImageView *imgFace;
@property (nonatomic) IBOutlet UITextField *txtName;
-(IBAction) pressSave:(id)sender;
@property (nonatomic) UIImagePickerController *imagePicker;
@property (nonatomic) YMSPhotoPickerViewController *ymsImagePicker;

@end
