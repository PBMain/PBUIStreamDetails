#import <UIKit/UIKit.h>

@interface FANtasticPhotosSelectSourceViewController : UIViewController

// UI
@property (weak, nonatomic) IBOutlet UIView *navigationView;
@property (weak, nonatomic) IBOutlet UIView *navigationSafeArea;
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *constraintNavTitleWidth;
@property (weak, nonatomic) IBOutlet UIView *poweredByPBView;
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *heightPoweredByPBView;
@property (weak, nonatomic) IBOutlet UIButton *buttonBack;
@property (weak, nonatomic) IBOutlet UILabel *lblTitle;
@property (weak, nonatomic) IBOutlet UILabel *lblNavigationTitleTM;

@property (weak, nonatomic) IBOutlet UIView *loadingView;

// Buttons are complex, so are more than just buttons
@property (weak, nonatomic) IBOutlet UIButton *buttonSourceLibrary;
@property (weak, nonatomic) IBOutlet UIButton *buttonSourceSelfie;
@property (weak, nonatomic) IBOutlet UIView *buttonSourceLibraryBackground;
@property (weak, nonatomic) IBOutlet UIView *buttonSourceSelfieBackground;
@property (weak, nonatomic) IBOutlet UILabel *buttonSourceLibraryTitle;
@property (weak, nonatomic) IBOutlet UILabel *buttonSourceSelfieTitle;
@property (weak, nonatomic) IBOutlet UILabel *buttonSourceLibrarySubtitle;
@property (weak, nonatomic) IBOutlet UILabel *buttonSourceSelfieSubtitle;

// Confirm button at the bottom
@property (weak, nonatomic) IBOutlet UIButton *buttonConfirm;

// Params
@property (nonatomic) BOOL isSelfieSelected;

// These can be from the stream or from the app
// We just pass them down from whoever is showing the views
@property (nonatomic) NSArray *backgroundImages;
@property (nonatomic) NSArray *overlayImages;

// If it's a stream, we will probably need the ID
@property (nonatomic) NSString *streamID;


@end
