#import <UIKit/UIKit.h>
#import <Photos/Photos.h>

@protocol TutorialImageSelectionDelegate;

@interface FANtasticPhotosSelfieCameraViewController : UIViewController

// UI
@property (weak, nonatomic) IBOutlet UIView *navigationView;
@property (weak, nonatomic) IBOutlet UIView *navigationSafeArea;
@property (weak, nonatomic) IBOutlet UIView *poweredByPBView;
@property (weak, nonatomic) IBOutlet UIView *swapCameraView;
@property (weak, nonatomic) IBOutlet UIView *takePhotoButtonView;
@property (weak, nonatomic) IBOutlet UIView *cameraFeedContainer;
@property (weak, nonatomic) IBOutlet UIView *loadingView;

@property (weak, nonatomic) IBOutlet UIButton *buttonBack;
@property (weak, nonatomic) IBOutlet UIButton *buttonTakePhoto;
@property (weak, nonatomic) IBOutlet UIButton *buttonSwapCamera;

// Photo taken views / buttons
@property (weak, nonatomic) IBOutlet UIButton *buttonRetake;
@property (weak, nonatomic) IBOutlet UIButton *buttonAcceptPhoto;
@property (weak, nonatomic) IBOutlet UIView *viewAcceptRejectPhoto;
@property (weak, nonatomic) IBOutlet UIImageView *imgViewTakenPhoto;

// For passing the finished asset
@property (nonatomic, weak) id <TutorialImageSelectionDelegate> delegate;

// These can be from the stream or from the app
// We just pass them down from whoever is showing the views
@property (nonatomic) NSArray *backgroundImages;
@property (nonatomic) NSArray *overlayImages;

// If it's a stream, we will probably need the ID
@property (nonatomic) NSString *streamID;
// Bypass saving the image before passing it back
@property (nonatomic) BOOL bypassSavingToPhotoLibrary;

@property (nonatomic) AVCaptureVideoPreviewLayer *videoPreviewLayer;
@property (nonatomic) AVCaptureSession *videoCaptureSession;
@property (nonatomic) NSData *photoTakenData;
@property (nonatomic) UIImage *photoTakenImg;

@end
