//
//  EditProfileLogoCellCollectionViewCell.h
//  PBPodUIStreamList
//
//  Created by Nikita Khodzhaiev on 15.09.2020.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface OneButtonView : UIView

@property (nonatomic, weak) IBOutlet UIImageView *imgOneButtonIcon;
@property (nonatomic, weak) IBOutlet UIImageView *imgOneButton;
@property (nonatomic, weak) IBOutlet UIView *viewOneButtonCustomColor;

- (void) updateUI;

@end

NS_ASSUME_NONNULL_END
