#import <UIKit/UIKit.h>
#import <Photos/Photos.h>

// For capturing drags not in the scrollview
@class LargeScrollView;

@interface FANtasticPhotosViewController : UIViewController <UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout, UIScrollViewDelegate>

// UI
@property (weak, nonatomic) IBOutlet UIView *navigationView;
@property (weak, nonatomic) IBOutlet UIView *navigationSafeArea;
@property (weak, nonatomic) IBOutlet UIView *poweredByPBView;
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *heightPoweredByPBView;
@property (weak, nonatomic) IBOutlet UIButton *btnBack;
@property (weak, nonatomic) IBOutlet UILabel *lblNavigationTitle;
@property (weak, nonatomic) IBOutlet UILabel *lblNavigationTitleTM;
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *constraintNavTitleWidth;

@property (weak, nonatomic) IBOutlet UIView *loadingView;
@property (weak, nonatomic) IBOutlet UICollectionView *collectionView;

// Instructions text
@property (weak, nonatomic) IBOutlet UIView *viewInstructions;
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *constraintInstructionHeight;

// Tab selection
@property (weak, nonatomic) IBOutlet UIView *viewTabContainer;
@property (weak, nonatomic) IBOutlet UIView *viewBackgroundsUnderline;
@property (weak, nonatomic) IBOutlet UIView *viewOverlaysUnderline;
@property (weak, nonatomic) IBOutlet UIButton *btnBackgroundsTab;
@property (weak, nonatomic) IBOutlet UIButton *btnOverlaysTab;
@property (weak, nonatomic) IBOutlet UILabel *lblBackgroundTab;
@property (weak, nonatomic) IBOutlet UILabel *lblOverlayTab;
@property (weak, nonatomic) IBOutlet UIImageView *imgBackgroundsIcon;
@property (weak, nonatomic) IBOutlet UIImageView *imgOverlaysIcon;
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *constraintTabContainerHeight;
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *constraintBackgroundTabTextWidth;
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *constraintOverlayTabTextWidth;

// Save button
@property (weak, nonatomic) IBOutlet UIView *viewSaveButtonContainer;
@property (weak, nonatomic) IBOutlet UIView *viewSaveButtonBackground;
@property (weak, nonatomic) IBOutlet UILabel *lblSaveButton;

// User image adjustment area
@property (weak, nonatomic) IBOutlet UIView *viewUserImageAdjustmentContainer;
@property (weak, nonatomic) IBOutlet UIImageView *imgUserCutout;
@property (weak, nonatomic) IBOutlet UIImageView *imgSelectedBackground;
@property (weak, nonatomic) IBOutlet LargeScrollView *scrollView;
@property (weak, nonatomic) IBOutlet UIView *viewOverlayContainer;
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *constraintAdjustmentAspect;
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *constraintAdjustmentBGAspect;
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *constraintAdjustmentMaxHeight;

@property (strong, nonatomic) NSMutableArray *backgroundImages;
@property (strong, nonatomic) NSMutableArray *overlayImages;
@property (strong, nonatomic) NSString *selectedTab;

@property (nonatomic) int selectedBackground;
@property (nonatomic) int selectedOverlay;

// How much the images are scaled down to fit into the views
@property (nonatomic) CGFloat scaleDown;

// one of these will be used to upload to the cutout service (whichever is present)
@property (nonatomic) PHAsset *selectedUserAsset;
@property (nonatomic) UIImage *selectedUserImage;

// If we're in a stream
@property (nonatomic) NSString *streamID;

// Timeout Timer
@property (nonatomic) NSTimer *timeoutTimer;

@end
