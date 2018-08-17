//
//  FakeSectionHeaderCell.h
//  PBPodUIStreamDetails
//
//  Created by Philippe Belley on 7/2/18.
//

#import <UIKit/UIKit.h>

@interface FakeSectionHeaderCell : UICollectionViewCell
@property (weak, nonatomic) IBOutlet UILabel *date;
@property (weak, nonatomic) IBOutlet UIImageView *calendarImage;
@property (weak, nonatomic) IBOutlet UIView *circularBackground;
@property (weak, nonatomic) IBOutlet UILabel *titleLbl;
@property (weak, nonatomic) IBOutlet UILabel *subtitleLbl;

@end
