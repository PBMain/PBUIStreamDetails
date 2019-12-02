#import <UIKit/UIKit.h>

@protocol InviteCodeMenuDelegate <NSObject>
- (void)openRenamePopup;
- (void)copyCode;
- (void)viewQRCode;

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
@property (weak, nonatomic) IBOutlet UIButton *btnQR;
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *filterButtonsHeightConstraint;

-(IBAction)pressCopy:(id)sender;
-(IBAction)pressEdit:(id)sender;
-(IBAction)pressCancel:(id)sender;
-(IBAction)pressViewQRCode:(id)sender;

@end
