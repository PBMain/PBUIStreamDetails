#import <UIKit/UIKit.h>

@protocol CustomStreamCoverMenuDelegate <NSObject>
- (void)openEditCover;
- (void)openNewCoverFromRoll;
- (void)openNewCoverFromCamera;
- (void)openNewCoverFromStream;
@end

@interface CustomStreamCoverMenu : UIView {
    
}

@property (nonatomic, weak) id<CustomStreamCoverMenuDelegate> delegate;

@property (retain,nonatomic) IBOutletCollection(UIImageView) NSArray *arrImgs;
@property (retain,nonatomic) IBOutletCollection(UIButton) NSArray *arrBtns;
@property (retain,nonatomic) IBOutlet UIButton *btnEdit;
@property (retain,nonatomic) IBOutlet UIButton *btnFromRoll;
@property (retain,nonatomic) IBOutlet UIButton *btnFromCamera;
@property (retain,nonatomic) IBOutlet UIButton *btnFromStream;
@property (retain,nonatomic) IBOutlet UIButton *btnCancel;
@property (retain,nonatomic) IBOutlet UIImageView *imgEdit;
@property (retain,nonatomic) IBOutlet UIImageView *imgFromRoll;
@property (retain,nonatomic) IBOutlet UIImageView *imgFromCamera;
@property (retain,nonatomic) IBOutlet UIImageView *imgFromStream;

@property (retain,nonatomic) IBOutlet UIView *viewFilterButtonsContainer;
@property (retain,nonatomic) IBOutlet UIView *viewCancelButtonContainer;

-(IBAction)pressEditCover:(id)sender;
-(IBAction)pressFromRoll:(id)sender;
-(IBAction)pressFromCamera:(id)sender;
-(IBAction)pressFromStream:(id)sender;

@end
