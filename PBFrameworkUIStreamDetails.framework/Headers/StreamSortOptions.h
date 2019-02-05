
#import <UIKit/UIKit.h>


typedef NS_ENUM(NSInteger, SortState) {
    NewestToOldest = 10,
    OldestToNewest = 11,
    ByRank = 12
};

@protocol StreamSortOptionsDelegate <NSObject>
- (void)sortNewToOld:(UIView*)caller;
- (void)sortOldToNew:(UIView*)caller;
- (void)sortByRank:(UIView*)caller;
- (void)cancelSort:(UIView*)caller;
@end

@interface StreamSortOptions : UIView

@property (weak, nonatomic) id<StreamSortOptionsDelegate> delegate;
@property (strong, nonatomic) IBOutletCollection(UIImageView) NSArray *collectionImages;
@property (strong, nonatomic) IBOutletCollection(UIButton) NSArray *collectionButtons;
@property (strong, nonatomic) IBOutletCollection(UIImageView) NSArray *checkMarkCollection;

@property (weak, nonatomic) IBOutlet UIView *optionsContainer;
@property (weak, nonatomic) IBOutlet UIView *cancelContainer;


- (IBAction)sortNewestToOldestPressed:(UIButton *)sender;
- (IBAction)sortOldestToNewestPressed:(UIButton *)sender;
- (IBAction)sortByRankPressed:(UIButton *)sender;
- (IBAction)cancelPressed:(UIButton *)sender;

- (void)setSortState:(SortState)sortState;
@end
