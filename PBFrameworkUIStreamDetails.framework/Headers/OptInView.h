
#import <UIKit/UIKit.h>
#import "EnvelopViewForOtpInCell.h"
@protocol OptInViewDelegate
@required
-(void) contributeSelected;
-(void) viewerOnlySelected;
@end

@interface OptInView : UIView <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, EnvelopeCellDelegate>
@property (weak, nonatomic) IBOutlet UIPageControl *pageControllerContributor;
@property (weak, nonatomic) IBOutlet UICollectionView *collectionviewContributor;
@property (nonatomic) NSDictionary *album;
@property (nonatomic) NSString *albumName;
@property (nonatomic) NSDictionary *host;
@property (nonatomic) NSString *albumID;
@property (nonatomic) NSString *albumOwnerId;
@property (nonatomic) NSDate *albumStartDate;
@property (nonatomic) NSDate *albumEndDate;
@property (nonatomic, weak) id<OptInViewDelegate> optInDelegate;
@end
