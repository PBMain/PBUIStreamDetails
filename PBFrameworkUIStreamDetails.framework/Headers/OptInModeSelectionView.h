
#import <UIKit/UIKit.h>
@protocol OptInModeSelectionDelegate
@required
-(void) modeSelected: (NSInteger) mode;
@end

@interface OptInModeSelectionView : UIView
@property (weak, nonatomic) IBOutlet UIButton *btnConfirm;
@property (weak, nonatomic) IBOutlet UIImageView *imgAuto;
@property (weak, nonatomic) IBOutlet UIImageView *imgManual;
@property (nonatomic) NSInteger currentSelection;
@property (weak, nonatomic) id<OptInModeSelectionDelegate> delegate;
@end
