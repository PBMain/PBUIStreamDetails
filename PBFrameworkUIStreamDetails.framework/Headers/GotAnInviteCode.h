#import <UIKit/UIKit.h>

@interface GotAnInviteCode : UIView

@property (retain,nonatomic) IBOutlet UILabel *lblTitle;
@property (retain,nonatomic) IBOutlet UILabel *lblSubTitle;
@property (retain,nonatomic) IBOutlet UIView *viewContainer;
@property (retain,nonatomic) IBOutlet UIImageView *imgKeyhole;
@property (retain,nonatomic) IBOutlet UIButton *btnCover;

-(IBAction)pressEnterCode:(id)sender;

@end
