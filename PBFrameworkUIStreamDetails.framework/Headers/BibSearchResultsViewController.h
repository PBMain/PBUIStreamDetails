#import <UIKit/UIKit.h>

@interface BibSearchResultsViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, UIScrollViewDelegate> {
    
}

@property (retain,nonatomic) IBOutlet UIView *vNavigationBar;
@property (retain,nonatomic) IBOutlet UIView *vSafeArea;
@property (retain,nonatomic) IBOutlet UIView *vLoading;
@property (retain,nonatomic) IBOutlet UILabel *lblTitle;
@property (retain,nonatomic) IBOutlet UILabel *lblBibDonateLink;
@property (retain,nonatomic) IBOutlet UIButton *btnBack;
@property (retain,nonatomic) IBOutlet UIButton *btnDonate;
@property (weak, nonatomic) IBOutlet UIImageView *imgRightArrow;

@property (retain,nonatomic) IBOutlet UICollectionView *cvSearch;
@property (retain,nonatomic) IBOutlet UITextField *txtSearchBar;

@property (retain,nonatomic) IBOutlet NSLayoutConstraint *lcDonateButtonHeight;
@property (retain,nonatomic) IBOutlet UIView *vDonate;

-(IBAction)pressDonate:(id)sender;
-(IBAction)pressBack:(id)sender;
-(void) refreshDisplay;

@property (retain,nonatomic) NSString *streamID;
@property (retain,nonatomic) NSString *streamName;
@property (retain,nonatomic) NSString *bibID;
@property (retain,nonatomic) NSString *name;
@property (retain,nonatomic) NSString *first;
@property (retain,nonatomic) NSString *last;
@property (retain,nonatomic) NSString *team;
@property (retain,nonatomic) NSArray *arrayPhotos;
@property (nonatomic) BOOL hasLaidOut;

@end
