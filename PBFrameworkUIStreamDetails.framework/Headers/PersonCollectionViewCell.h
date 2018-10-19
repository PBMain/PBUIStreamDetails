//
//  PersonCollectionViewCell.h
//  AFNetworking
//
//  Created by Michael Liptuga on 09.10.2018.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface PersonCollectionViewCell : UICollectionViewCell

+ (NSString*) cellId;

+ (id) cellNib;

+ (CGFloat) cellHeight;

+ (CGSize) cellSizeIsMe : (BOOL) isMe;

- (void) configureWithPersonDictionary : (NSDictionary*) personDictionary
                          albumOwnerId : (NSString*) albumOwnerId
                               albumId : (NSString*) albumId
                                isHost : (BOOL) isHost
                                  isMe : (BOOL) isMe;

- (void) configurePeopleCounterLabel : (NSUInteger) numberOfPeople
                      maxValidNumber : (NSUInteger) maxValidNumber
                       isTheLastItem : (BOOL) isTheLastItem
                          isExpanded : (BOOL) isExpanded;

@end

NS_ASSUME_NONNULL_END
