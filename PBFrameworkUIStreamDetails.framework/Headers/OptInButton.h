#import <UIKit/UIKit.h>

@protocol OptInButtonDelegate
- (void) pressedOptInButton:(BOOL)isManual;
@end

@interface OptInButton : UIView

@property (weak, nonatomic) id<OptInButtonDelegate> delegate;

@property (weak, nonatomic) IBOutlet UIButton *btnMain;
@property (weak, nonatomic) IBOutlet UIImageView *imgMain;
@property (weak, nonatomic) IBOutlet UILabel *lblTitle;
@property (weak, nonatomic) IBOutlet UILabel *lblSubtitle;
@property (weak, nonatomic) IBOutlet UIView *vCheckBackground;
@property (weak, nonatomic) IBOutlet UIView *vCheckInternalBG;
@property (weak, nonatomic) IBOutlet UIView *vSelectedBG;
@property (weak, nonatomic) IBOutlet UIImageView *imgCheck;

@property (weak, nonatomic) IBOutlet NSLayoutConstraint *lcBGTop;
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *lcBGBottom;
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *lcBGLeft;
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *lcBGRight;

@property (nonatomic) BOOL isAutoContributeButton;
@property (nonatomic) BOOL isSelected;

-(IBAction)pressQuestionMark:(id)sender;
-(IBAction)pressMainButton:(id)sender;

-(void) setIsAuto:(BOOL)isAuto;

@end
