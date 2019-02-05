//
//  PBActivityFeedMediaCollectionViewCell.h
//  PBPodUIStreamDetails
//
//  Created by Michael Liptuga on 11/16/18.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface PBActivityFeedMediaCollectionViewCell : UICollectionViewCell

+ (NSString*) cellId;

+ (id) cellNib;

+ (CGFloat) numberOfRowsInOneLine;

+ (CGSize) sizeForMediaFiles : (NSArray*) mediaFiles
              withSideOffset : (CGFloat) sideOffset;

- (void) configureForObject : (id) object
              photoStreamId : (id) photoStreamId;

- (void) configurePhotosCounterLabel : (NSUInteger) numberOfPhotos
                      maxValidNumber : (NSUInteger) maxValidNumber
                       isTheLastItem : (BOOL) isTheLastItem;

@end

NS_ASSUME_NONNULL_END
