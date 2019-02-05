
#import <UIKit/UIKit.h>

@protocol OneButtonMenuDelegate <NSObject>
-(void) beContributorAction;
-(void) setStreamAsFavorite;
-(void) openMoreWaysToShare;
-(void) showCommentAggregateView;
-(void) openAudienceView;
-(void) leaveOrEditStream;
-(void) contributionPause;
-(void) contributionStart;
-(void) openAutomaticContribution;
-(void) openManualContribution;
@end

@interface OneButtonMenu : UIView

typedef NS_ENUM(NSUInteger, CTA_Type) {
    kGotInviteCTA,
    kSendInviteCTA,
    kPlayPauseCTA,
    kManualUploadCTA,
    kNoCTA
};

@property (nonatomic) CTA_Type currentCTA;

@property (nonatomic, weak) id <OneButtonMenuDelegate> delegate;
@property (nonatomic) BOOL upcoming;
@property (nonatomic) BOOL host;
@property (nonatomic) NSString *streamID;
@property (nonatomic) NSString *streamName;

@property (weak, nonatomic) IBOutlet UIButton *btnManualUpload;

@property (nonatomic) IBOutlet UIImageView *imgLeaveEditStream;
@property (nonatomic) IBOutlet UIImageView *imgShare;
@property (nonatomic) IBOutlet UIImageView *imgAutoUpload;
@property (nonatomic) IBOutlet UIImageView *imgManualUpload;

@property (nonatomic) IBOutlet UIView *vAutoUploadImgBG;
@property (nonatomic) IBOutlet UIView *vManualUploadImgBG;
@property (nonatomic) IBOutlet UILabel *lblLeaveEditStream;
@property (nonatomic) IBOutlet UILabel *lblShare;
@property (nonatomic) IBOutlet UILabel *lblAutoUpload;
@property (nonatomic) IBOutlet UILabel *lblManualUpload;
@property (nonatomic) IBOutlet UIButton *btnCancel;
@property (nonatomic) IBOutlet UIView *vCallsToAction;
@property (nonatomic) IBOutlet UIView *vButtonsWhiteBackground;
@property (nonatomic) IBOutlet UIView *vButtonsGrayBackground;
@property (nonatomic) IBOutlet UIView *vbAutoUpload;
@property (nonatomic) IBOutlet UIView *vbManualUpload;
@property (nonatomic) IBOutlet UIView *vbSaveShare;
@property (nonatomic) IBOutlet UIView *vbEditLeave;
@property (nonatomic) IBOutletCollection(UIView) NSArray *arrayButtonImageContainers;
@property (nonatomic) IBOutletCollection(UIImageView) NSArray *arrayButtonImages;
@property (nonatomic) IBOutlet NSLayoutConstraint *lcButtonsWhiteBackgroundHeight;
@property (nonatomic) IBOutlet NSLayoutConstraint *lcCallToActionContainerHeight;
@property (nonatomic) IBOutlet NSLayoutConstraint *lcGrayBackgroundHeight;
@property (nonatomic) IBOutlet NSLayoutConstraint *lcSharePhotosHeight;
@property (nonatomic) IBOutlet NSLayoutConstraint *lcManualHeight;
@property (nonatomic) IBOutlet NSLayoutConstraint *lcAutomaticHeight;
@property (nonatomic) IBOutlet NSLayoutConstraint *lcLeaveEditHeight;
@property (nonatomic) IBOutlet UISwitch *switchAutoUpload;

-(void) prepareForNoCallToAction;
-(void) prepareForContributionInvite;
-(void) prepareForAutomaticSharing;
-(void) prepareForManualSharing;
-(void) prepareForContributingStreamOver;
-(void) setIsHost:(BOOL)isHost;
-(void) setIsUpcoming:(BOOL)isUpcoming;
-(void) setHasPhotos:(BOOL)hasPhotos;

-(void) showContributionEnvelope;
-(void) contributionPause;
-(void) contributionStart;
-(void) openAutomaticContribution;
-(void) openManualContribution;

-(void) enableManualUploadPhotos : (BOOL) isEnabled;
-(void) enableAutoSharePhotos : (BOOL) isEnabled;

-(void) hideAutoContributionButton;

@end
