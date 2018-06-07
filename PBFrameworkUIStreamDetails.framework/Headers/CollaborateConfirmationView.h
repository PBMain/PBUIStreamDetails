#import <UIKit/UIKit.h>

@protocol CollaborateConfirmationViewDelegate <NSObject>

-(void)viewForHideORNot : (BOOL)isTrue isSecond:(BOOL)isSecond;

@end

@interface CollaborateConfirmationView : UIView

@property (retain,nonatomic) IBOutlet UILabel *lblinst1;
@property (retain,nonatomic) IBOutlet UILabel *lblinst2;
@property (retain,nonatomic) IBOutlet UILabel *lblinst3;
@property (retain,nonatomic) IBOutlet UILabel *lblinst3_1;
@property (retain,nonatomic) IBOutlet UILabel *lblinst3_2;
@property (retain,nonatomic) IBOutlet UILabel *lblinst4;
@property (retain,nonatomic) IBOutlet UILabel *lblinst5;
@property (retain,nonatomic) IBOutlet UILabel *lblinst6;

@property (retain,nonatomic) IBOutlet UILabel *lblHostInvited2;
@property (retain,nonatomic) IBOutlet UILabel *lblContribute;
@property (retain,nonatomic) IBOutlet UILabel *lblAddPhoto;
@property (retain,nonatomic) IBOutlet UILabel *lblPhotoStream;

@property (retain,nonatomic) IBOutlet UILabel *lblAlbumName;
@property (retain,nonatomic) IBOutlet UILabel *lblTimeSpan;
@property (retain,nonatomic) IBOutlet UILabel *lblHostInvited;
@property (retain,nonatomic) IBOutlet UIButton *btnYes;
@property (retain,nonatomic) IBOutlet UIButton *btnNo;
@property (retain,nonatomic) IBOutlet UIButton *btnClose;
@property (retain,nonatomic) IBOutlet UIImageView *imgHost;
@property (retain,nonatomic) IBOutlet UIView *viewContainer;
@property (retain,nonatomic) IBOutletCollection(UIView) NSArray *arrayGradientViews;

@property (retain,nonatomic) NSString *ownerId;
@property (retain,nonatomic) NSString *streamAlbumId;
@property (retain,nonatomic) NSString *albumName;
@property (retain,nonatomic) NSString *hostName;
@property (retain,nonatomic) NSString *timeSpan;
@property (retain,nonatomic) NSString *inviteCode;

@property (assign,nonatomic) BOOL isLastPopup;
@property (nonatomic) id <CollaborateConfirmationViewDelegate> delegate;

-(IBAction)pressYes:(id)sender;
-(IBAction)pressNo:(id)sender;

@end
