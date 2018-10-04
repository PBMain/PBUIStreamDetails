
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

@property (nonatomic) IBOutlet UIImageView *imgLeaveEditStream;
@property (nonatomic) IBOutlet UIImageView *imgAudience;
@property (nonatomic) IBOutlet UIImageView *imgShare;
@property (nonatomic) IBOutlet UIImageView *imgFavorite;
@property (nonatomic) IBOutlet UIImageView *imgComments;
@property (nonatomic) IBOutlet UILabel *lblLeaveEditStream;
@property (nonatomic) IBOutlet UILabel *lblAudience;
@property (nonatomic) IBOutlet UILabel *lblShare;
@property (nonatomic) IBOutlet UILabel *lblFavorite;
@property (nonatomic) IBOutlet UILabel *lblComments;
@property (nonatomic) IBOutlet UIButton *btnCancel;
@property (nonatomic) IBOutlet UIView *vCallsToAction;
@property (nonatomic) IBOutlet UIView *vButtonsWhiteBackground;
@property (nonatomic) IBOutlet UIView *vButtonsGrayBackground;
@property (nonatomic) IBOutlet NSLayoutConstraint *lcButtonsWhiteBackgroundHeight;

-(void) prepareForNoCallToAction;
-(void) prepareForContributionInvite;
-(void) prepareForAutomaticSharing;
-(void) prepareForManualSharing;
-(void) prepareForContributingStreamOver;
-(void) setIsHost:(BOOL)isHost;

-(void) showContributionEnvelope;
-(void) contributionPause;
-(void) contributionStart;
-(void) openAutomaticContribution;
-(void) openManualContribution;

@end
