#import <UIKit/UIKit.h>

@protocol InviteCodeMenuDelegate <NSObject>
- (void)openRenamePopup;
- (void)copyCode;
@end

@interface InviteCodeMenu : UIView {
    
}

@property (nonatomic, weak) id<InviteCodeMenuDelegate> delegate;

@property (retain,nonatomic) IBOutletCollection(UIImageView) NSArray *arrImgs;
@property (retain,nonatomic) IBOutlet UIButton *btnCopy;
@property (retain,nonatomic) IBOutlet UIButton *btnEdit;
@property (retain,nonatomic) IBOutlet UIButton *btnCancel;
@property (retain,nonatomic) IBOutlet UIImageView *imgCopy;
@property (retain,nonatomic) IBOutlet UIImageView *imgEdit;
@property (retain,nonatomic) IBOutlet UIView *viewFilterButtonsContainer;
@property (retain,nonatomic) IBOutlet UIView *viewCancelButtonContainer;

-(IBAction)pressCopy:(id)sender;
-(IBAction)pressEdit:(id)sender;
-(IBAction)pressCancel:(id)sender;

@end
