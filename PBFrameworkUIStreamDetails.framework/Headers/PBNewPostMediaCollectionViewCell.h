//
//  PBNewPostMediaCollectionViewCell.h
//  AFNetworking
//
//  Created by Michael Liptuga on 11/8/18.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@class PBNewPostMediaCollectionViewCell;

@protocol PBNewPostMediaCollectionViewCellDelegate <NSObject>

@required

- (void) pbNewPostMediaCollectionViewCellRemoveMediaButtonDidTouch :  (PBNewPostMediaCollectionViewCell*) pbNewPostMediaCollectionViewCell;

@optional

@end


@interface PBNewPostMediaCollectionViewCell : UICollectionViewCell

@property (nonatomic, weak) id<PBNewPostMediaCollectionViewCellDelegate> delegate;

+ (NSString*) cellId;

+ (id) cellNib;

+ (CGSize) cellSize : (CGFloat) collectionViewSideOffset;

- (void) configureForObject : (id) object;

@end

NS_ASSUME_NONNULL_END
