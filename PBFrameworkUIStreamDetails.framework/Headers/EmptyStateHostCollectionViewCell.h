#import <UIKit/UIKit.h>

@interface EmptyStateHostCollectionViewCell : UICollectionViewCell

@property (retain,nonatomic) IBOutlet UIImageView *imgCamera;
@property (retain,nonatomic) IBOutlet UIImageView *imgInvite;
@property (retain,nonatomic) IBOutlet UIImageView *imgEdit;

@property (retain,nonatomic) IBOutlet UIButton *btnCamera;
@property (retain,nonatomic) IBOutlet UIButton *btnInvite;
@property (retain,nonatomic) IBOutlet UIButton *btnEdit;

@property (retain,nonatomic) IBOutlet UILabel *lblTitle;
@property (retain,nonatomic) IBOutlet UILabel *lblSubtitle;
@property (strong, nonatomic) IBOutletCollection(UIView) NSArray *hostOnlyViews;

-(IBAction) pressCamera:(id)sender;
-(IBAction) pressInvite:(id)sender;
-(IBAction) pressEdit:(id)sender;

-(void) contributorMode:(BOOL)isContributor;
@end
