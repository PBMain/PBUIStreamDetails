#import <UIKit/UIKit.h>

@interface NewPhotoStreamTableViewCell : UITableViewCell
@property (retain,nonatomic) IBOutlet UIButton *btnForTimeOperator;

@property (retain,nonatomic) IBOutlet UIButton *btnForLocation;

@property (retain,nonatomic) IBOutlet UIButton *btnForPlus;
@property (retain,nonatomic) IBOutlet UIButton *btnForMinus;
@property (retain,nonatomic) IBOutlet UIImageView *imgCarat;

@property (retain,nonatomic) IBOutlet UILabel *lblTimeInterval;
@property (retain,nonatomic) IBOutlet UILabel *lblTimeCalculate;

@property (retain,nonatomic) IBOutlet UIImageView *imgSignal;

@property (retain,nonatomic) IBOutlet UISwitch *switchAll;
@property (retain,nonatomic) IBOutlet UIButton *btnForDate;
@property (retain,nonatomic) IBOutlet UIButton *btnForTime;
@property (retain,nonatomic) IBOutlet UILabel *lblForTitle;

@property (retain,nonatomic) IBOutlet UIImageView *imgSeperator;
@property (retain,nonatomic) IBOutlet UIImageView *imgStartNow;
@property (retain,nonatomic) IBOutlet UIImageView *imgScheduled;
@property (retain,nonatomic) IBOutlet UILabel *lblStartNow;
@property (retain,nonatomic) IBOutlet UILabel *lblScheduled;

@property (retain,nonatomic) IBOutlet UILabel *lblScheduleAroundLabel;

@property (retain,nonatomic) IBOutlet UILabel *lblOptionTitle;
@property (retain,nonatomic) IBOutlet UILabel *lblOptionValue;
@property (retain,nonatomic) IBOutlet UILabel *subtitleLabel;
@property (weak, nonatomic) IBOutlet UILabel *mainTitleLabel;

@property (weak, nonatomic) IBOutlet NSLayoutConstraint *imgSignalHeight;
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *imgSignalTopOffset;

@property (nonatomic, assign) BOOL needToDisplayImgSignal;


@end
