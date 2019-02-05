//
//  PBActivityFeedCollectionViewCell.h
//  AFNetworking
//
//  Created by Michael Liptuga on 11/13/18.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@class PBActivityFeedCollectionViewCell;

@protocol PBActivityFeedCollectionViewCellDelegate <NSObject>

@required

- (void) pbActivityFeedCollectionViewCellLeaveCommentButtonDidTouch :  (PBActivityFeedCollectionViewCell*) pbActivityFeedCollectionViewCell;

- (void) pbActivityFeedCollectionViewCellAddToFavoritesButtonDidTouch :  (PBActivityFeedCollectionViewCell*) pbActivityFeedCollectionViewCell isFavoredByMe : (BOOL) isFavoredByMe;

- (void) pbActivityFeedCollectionViewCellSettingsButtonDidTouch :  (PBActivityFeedCollectionViewCell*) pbActivityFeedCollectionViewCell;

- (void) pbActivityFeedCollectionViewCellViewAllCommentsButtonDidTouch :  (PBActivityFeedCollectionViewCell*) pbActivityFeedCollectionViewCell;

- (void) pbActivityFeedCollectionViewCellShowComment :  (PBActivityFeedCollectionViewCell*) pbActivityFeedCollectionViewCell atIndex : (NSInteger) index;

- (void) pbActivityFeedCollectionViewCellShowAllMediaFiles :  (PBActivityFeedCollectionViewCell*) pbActivityFeedCollectionViewCell;

- (void) pbActivityFeedCollectionViewCellShowMediaFile : (PBActivityFeedCollectionViewCell*) pbActivityFeedCollectionViewCell atIndex : (NSInteger) index;


@optional

@end

@interface PBActivityFeedCollectionViewCell : UICollectionViewCell

@property (nonatomic, weak) id<PBActivityFeedCollectionViewCellDelegate> delegate;

@property (nonatomic, strong) NSDictionary *post;

+ (NSString*) cellId;

+ (id) cellNib;

+ (CGSize) sizeForObject : (id) object;

- (void) configureForObject : (id) object;

- (void) updateLeaveCommentButton : (BOOL) wasLeftCommentByMe
                    commentsCount : (NSNumber*) commentsCount;

- (void) updateAddToFavoritesButton : (BOOL) wasFavoredByMe
                     favoritesCount : (NSNumber*) favoritesCount;


@end

NS_ASSUME_NONNULL_END
