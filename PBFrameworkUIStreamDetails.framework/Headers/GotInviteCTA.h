#import <UIKit/UIKit.h>

@interface GotInviteCTA : UIView

@property (nonatomic) IBOutlet UIImageView *imgIcon;
@property (nonatomic) IBOutlet UIView *vIconContainer;
@property (nonatomic) IBOutlet UIImageView *imgArrow;
@property (nonatomic) IBOutlet UILabel *lblTitle;
@property (nonatomic) IBOutlet UILabel *lblSubtitle;

-(IBAction)pressShare:(id)sender;

@property (nonatomic, weak) id delegate;

-(void) setupForForgotToAddPhotos;
-(void) setupForUpcomingInvite;

@end
