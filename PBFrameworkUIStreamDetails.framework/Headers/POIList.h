#import <UIKit/UIKit.h>

@interface POIList : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, UIScrollViewDelegate>

@property (nonatomic) IBOutlet UIView *vAboveSafe;
@property (nonatomic) IBOutlet UIView *vNavigation;
@property (nonatomic) IBOutlet UILabel *lblTitle;
@property (nonatomic) IBOutlet UIButton *btnBack;

@property (nonatomic) UIView *vLoading;
@property (nonatomic) IBOutlet UICollectionView *colvPeople;

@property (nonatomic) NSMutableArray *arrayPOI;

@property (nonatomic) BOOL hasDoneInitialLayout;
@property (nonatomic) BOOL dragRefreshAvailable;
@property (nonatomic) NSLock *lockDragRefresh;

-(IBAction) pressBack:(id)sender;

@end
