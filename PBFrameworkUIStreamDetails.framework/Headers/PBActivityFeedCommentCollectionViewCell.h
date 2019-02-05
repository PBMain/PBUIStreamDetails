//
//  PBActivityFeedCommentCollectionViewCell.h
//  PBPodUIStreamDetails
//
//  Created by Michael Liptuga on 11/19/18.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface PBActivityFeedCommentCollectionViewCell : UICollectionViewCell

+ (NSString*) cellId;

+ (id) cellNib;

+ (CGSize) cellSizeForComment : (id) object;

- (void) configureWithComment : (id) object;

@end

NS_ASSUME_NONNULL_END
