#import <UIKit/UIKit.h>
#import <MessageUI/MessageUI.h>
//#import <FBSDKShareKit/FBSDKShareKit.h>

@class LoadingView;

@interface SelectImagesToShare : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource, MFMessageComposeViewControllerDelegate, UIDocumentInteractionControllerDelegate> {
    
}

@property (nonatomic) NSString *postID;
@property (nonatomic) NSString *streamID;
@property (nonatomic) NSString *streamName;
@property (nonatomic) NSMutableArray *assetArray;
@property (nonatomic) LoadingView *viewLoading;

@property (unsafe_unretained, nonatomic) IBOutlet UIView *statusCover;
@property (unsafe_unretained, nonatomic) IBOutlet UIView *topNav;
@property (weak, nonatomic) IBOutlet UILabel *lblPhotosSelected;
@property (nonatomic) IBOutlet UIButton *btnBack;
@property (nonatomic) IBOutlet UICollectionView *cvAssets;
@property (nonatomic) NSMutableDictionary *tapStatus;
@property (weak, nonatomic) IBOutlet UIButton *btnSelectAll;

// Share bar buttons.
@property (weak, nonatomic) IBOutlet UIButton *btnDownload;
@property (weak, nonatomic) IBOutlet UIButton *btnFacebook;
@property (weak, nonatomic) IBOutlet UIButton *btnInstagram;
@property (weak, nonatomic) IBOutlet UIButton *btnMessage;
@property (weak, nonatomic) IBOutlet UIButton *btnIOSControl;

@property (atomic) NSLock  *imageCacheLock;
@property (nonatomic) NSMutableDictionary *imageCache;
@property (nonatomic) NSMutableDictionary *imageQueue;
@property (nonatomic) NSMutableArray *arrayFacebookVideoURLs;
@property (nonatomic) SEL shareTask;
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *conInstagramIconSize;
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *conFacebookInstagramSpacing;
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *conInstagramSMSSpacing;
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *conFacebookIconSize;

@property (nonatomic) UIDocumentInteractionController *docController;
@property (nonatomic) UIActivityViewController *actController;

// For using iOS sharing dialog
@property (nonatomic) NSTimer *timerPopupWatcher;
@property (nonatomic) BOOL hasSentShareEvent;

@property (nonatomic) NSMutableArray *arrayVideoAssetIDs;
@property (nonatomic) NSMutableArray *arrayImageAssetIDs;

@end
