#import <UIKit/UIKit.h>

@interface OfflineBanner : UIView

@property (retain,nonatomic) IBOutlet UILabel *lblTitle;
@property (retain,nonatomic) IBOutlet UIView *viewContainer;
@property (retain,nonatomic) IBOutlet UIImageView *imgBackground;
@property (retain,nonatomic) IBOutlet UIButton *btnClose;

@property (retain,nonatomic) NSTimer *timerChangeText;

-(IBAction)pressClose:(id)sender;
-(void)startTimer;
-(void)stopTimer;

@end
