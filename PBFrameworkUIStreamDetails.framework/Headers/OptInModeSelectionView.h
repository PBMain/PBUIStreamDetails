#import <UIKit/UIKit.h>
#import "OptInButton.h"

@protocol OptInModeSelectionDelegate
@required
-(void) modeSelected: (NSInteger) mode;
@end

@interface OptInModeSelectionView : UIView <OptInButtonDelegate>
@property (weak, nonatomic) IBOutlet UIButton *btnConfirm;
@property (weak, nonatomic) IBOutlet UIImageView *imgAuto;
@property (weak, nonatomic) IBOutlet UIImageView *imgManual;
@property (weak, nonatomic) IBOutlet UIView *vAuto;
@property (weak, nonatomic) IBOutlet UIView *vManual;
@property (nonatomic) NSInteger currentSelection;
@property (weak, nonatomic) id<OptInModeSelectionDelegate> delegate;

@property (nonatomic) UIImage *customizeAutoButtonImage;
@property (nonatomic) UIImage *customizeAutoButtonSelectedImage;
@property (nonatomic) UIImage *customizeManualButtonImage;
@property (nonatomic) UIImage *customizeManualButtonSelectedImage;

@property (nonatomic) NSString *streamID;
@property (nonatomic) NSString *streamName;

@property (nonatomic) OptInButton *oibAuto;
@property (nonatomic) OptInButton *oibManual;

-(IBAction)manualTapped:(UITapGestureRecognizer *)sender;
-(IBAction)autoTapped:(UITapGestureRecognizer *)sender;

@end
