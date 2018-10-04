#import <UIKit/UIKit.h>

@interface CameraControlsCTA : UIView

@property (nonatomic) IBOutlet UIImageView *imgAutomatic;
@property (nonatomic) IBOutlet UIImageView *imgManual;
@property (nonatomic) IBOutlet UIImageView *imgPauseAutomaticContribution;
@property (nonatomic) IBOutlet UIImageView *imgResumeAutomaticContribution;
@property (nonatomic) IBOutlet UILabel *lblTitle;
@property (nonatomic) IBOutlet UILabel *lblStartAutoShare;
@property (nonatomic) IBOutlet UIView *vStartAutoShare;
@property (nonatomic) IBOutlet UIView *vStartAutoShareOrangeDot;
@property (nonatomic) IBOutlet UIButton *btnAutomatic;
@property (nonatomic) IBOutlet UIButton *btnStartPauseAutomatic;
@property (nonatomic) IBOutlet UIButton *btnManual;

@property (nonatomic, weak) id delegate;

-(void) prepareForAutomaticSharing;
-(void) prepareForManualSharing;

-(IBAction)pressStartPauseAutomaticSharing:(id)sender;
-(IBAction)pressAutomatic:(id)sender;
-(IBAction)pressManual:(id)sender;

@end
