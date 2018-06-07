#import <UIKit/UIKit.h>

@interface ContributingCoverBanner : UIView {
    
}

@property (nonatomic) BOOL isContributing;

@property (retain,nonatomic) IBOutlet UILabel *lblTitle;
@property (retain,nonatomic) IBOutlet UIView *viewParent;
@property (retain,nonatomic) IBOutlet UIView *viewDot;

// Redraws the button
-(void) setContributing;
-(void) setSpectating;

@end
