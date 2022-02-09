
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
-(void) createVideoStory;
-(void) createCinemajor;
-(void) openFITS;
-(void) openARExperience;

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
@property (weak, nonatomic) IBOutlet UIButton *btnCreateVideoStory;
@property (weak, nonatomic) IBOutlet UIButton *btnCreateCinemajor;

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
@property (nonatomic) IBOutlet UILabel *lblCreateVideoStory;
@property (nonatomic) IBOutlet UILabel *lblCreateCinemajor;
@property (nonatomic) IBOutlet UILabel *lblCreateFITSImage;
@property (nonatomic) IBOutlet UILabel *lblARExperience;
@property (nonatomic) IBOutlet UIButton *btnCancel;
@property (nonatomic) IBOutlet UIView *vCallsToAction;
@property (nonatomic) IBOutlet UIView *vButtonsWhiteBackground;
@property (nonatomic) IBOutlet UIView *vButtonsGrayBackground;
@property (nonatomic) IBOutlet UIView *vbCreateVideoStory;
@property (nonatomic) IBOutlet UIView *vbAutoUpload;
@property (nonatomic) IBOutlet UIView *vbManualUpload;
@property (nonatomic) IBOutlet UIView *vbSaveShare;
@property (nonatomic) IBOutlet UIView *vbEditLeave;
@property (nonatomic) IBOutlet UIView *vbCreateCinemajor;
@property (nonatomic) IBOutlet UIView *vbCreateCinemini;
@property (nonatomic) IBOutlet UIView *vbFITS;
@property (nonatomic) IBOutlet UIView *vbARExperience;

@property (nonatomic) IBOutletCollection(UIView) NSArray *arrayButtonImageContainers;
@property (nonatomic) IBOutletCollection(UIImageView) NSArray *arrayButtonImages;
@property (nonatomic) IBOutlet NSLayoutConstraint *lcButtonsWhiteBackgroundHeight;
@property (nonatomic) IBOutlet NSLayoutConstraint *lcCallToActionContainerHeight;
@property (nonatomic) IBOutlet NSLayoutConstraint *lcGrayBackgroundHeight;
@property (nonatomic) IBOutlet NSLayoutConstraint *lcCreateVideoStoryHeight;
@property (nonatomic) IBOutlet NSLayoutConstraint *lcCreateCinemajorHeight;
@property (nonatomic) IBOutlet NSLayoutConstraint *lcCreateCineminiHeight;
@property (nonatomic) IBOutlet NSLayoutConstraint *lcFITSHeight;
@property (nonatomic) IBOutlet NSLayoutConstraint *lcARExperienceHeight;

@property (nonatomic) IBOutlet NSLayoutConstraint *lcSharePhotosHeight;
@property (nonatomic) IBOutlet NSLayoutConstraint *lcManualHeight;
@property (nonatomic) IBOutlet NSLayoutConstraint *lcAutomaticHeight;
@property (nonatomic) IBOutlet NSLayoutConstraint *lcLeaveEditHeight;
@property (nonatomic) IBOutlet UISwitch *switchAutoUpload;
@property (nonatomic) IBOutlet UIActivityIndicatorView *actVideoStoryLoading;

-(void) prepareForNoCallToAction;
-(void) prepareForContributionInvite;
-(void) prepareForAutomaticSharing;
-(void) prepareForManualSharing;
-(void) prepareForContributingStreamOver;
-(void) setIsHost:(BOOL)isHost;
-(void) setIsUpcoming:(BOOL)isUpcoming;
-(void) setHasPhotos:(BOOL)hasPhotos;
-(void) setHasVideoStory:(BOOL)hasVideoStory;
-(void) setHasCinemajor:(BOOL)hasCinemajor;
-(void) setHasCinemini:(BOOL)hasCinemini;
-(void) setHasFITS:(BOOL)hasFITS;
-(void) setHasARExperience:(BOOL)hasARExperience;

-(void) showContributionEnvelope;
-(void) contributionPause;
-(void) contributionStart;
-(void) openAutomaticContribution;
-(void) openManualContribution;

-(void) enableManualUploadPhotos : (BOOL) isEnabled;
-(void) enableAutoSharePhotos : (BOOL) isEnabled;
-(void) videoStoryIsDoneLoading : (BOOL) isDoneLoading;

-(void) hideAutoContributionButton;
-(void) hideLeaveEditStreamButton;

@end
