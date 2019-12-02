#import <UIKit/UIKit.h>

@interface BibSearchViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, UIScrollViewDelegate, UITextFieldDelegate> {
    
}

@property (retain,nonatomic) IBOutlet UIView *vNavigationBar;
@property (retain,nonatomic) IBOutlet UIView *vSafeArea;
@property (retain,nonatomic) IBOutlet UIView *vLoadingViewContainer;
@property (retain,nonatomic) IBOutlet UILabel *lblTitle;
@property (retain,nonatomic) IBOutlet UIButton *btnBack;

@property (retain,nonatomic) IBOutlet UICollectionView *cvSearch;
@property (retain,nonatomic) IBOutlet UITextField *txtSearchBar;

@property (nonatomic) int streamYear;
@property (retain,nonatomic) NSString *streamID;
@property (retain,nonatomic) NSString *streamName;
@property (retain,nonatomic) NSString *year;
@property (retain,nonatomic) NSString *bibInfoPath;
@property (retain,nonatomic) NSArray *arraySearch;
@property (retain,nonatomic) NSMutableArray *arraySearchForFilter;
@property (retain,nonatomic) NSMutableArray *arrayFilteredSearch;
@property (nonatomic) BOOL firstEdit;

// New Spartan Race Type
@property (retain,nonatomic) NSString *metaRaceURL;
@property (retain,nonatomic) NSString *lastBibSearchString;
@property (retain,nonatomic) NSTimer *timerBibSearchEntry;
@property (retain,nonatomic) NSMutableArray *arrayImagesAboveThreshold;
@property (retain,nonatomic) NSMutableArray *arrayImagesBelowThreshold;
@property (nonatomic) BOOL hasLoadedOnce;

-(IBAction) pressBack:(id)sender;
-(IBAction) textFieldChanged:(id)sender;

-(void) useRiderArrayForYear:(NSString*)year;

@end
