
#import <UIKit/UIKit.h>

@protocol OneButtonMenuUpcomingDelegate <NSObject>
-(void) openAudienceView;
-(void) setContributionManual;
-(void) setContributionAutomatic;
-(void) leaveOrEditStream;
@end

@interface OneButtonMenuUpcoming : UIView

@property (nonatomic, weak) id <OneButtonMenuUpcomingDelegate> delegate;

@property (nonatomic) IBOutlet UIImageView *imgLeaveEditStream;
@property (nonatomic) IBOutlet UIImageView *imgAudience;
@property (nonatomic) IBOutlet UILabel *lblLeaveEditStream;
@property (nonatomic) IBOutlet UILabel *lblAudience;
@property (nonatomic) IBOutlet UILabel *lblShareType;
@property (nonatomic) IBOutlet UIButton *btnCancel;
@property (nonatomic) IBOutlet UIView *vCallsToAction;
@property (nonatomic) IBOutlet UIView *vButtonsWhiteBackground;
@property (nonatomic) IBOutlet UIView *vButtonsGrayBackground;

-(void) prepareForInvite;
-(void) prepareForManual;
-(void) prepareForAutomatic;
-(void) openAudienceInvite;

@end
