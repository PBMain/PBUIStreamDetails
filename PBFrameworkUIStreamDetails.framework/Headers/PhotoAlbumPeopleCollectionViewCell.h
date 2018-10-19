//
//  PhotoAlbumPeopleCollectionViewCell.h
//  AFNetworking
//
//  Created by Michael Liptuga on 09.10.2018.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN
@class PhotoAlbumPeopleCollectionViewCell;

@protocol PhotoAlbumPeopleCollectionViewCellDelegate <NSObject>

@optional

- (void) photoAlbumPeopleCollectionViewCell: (PhotoAlbumPeopleCollectionViewCell*) photoAlbumPeopleCollectionViewCell didSelectPerson : (NSDictionary*) person;

@end


@interface PhotoAlbumPeopleCollectionViewCell : UICollectionViewCell

@property (nonatomic, weak) id<PhotoAlbumPeopleCollectionViewCellDelegate> delegate;

+ (NSString*) cellId;

+ (id) cellNib;

+ (CGSize) cellSizeWithCategoriesCount : (NSInteger) categoriesCount ;

- (void) configureWithPeopleCategories : (NSArray*) peopleCategories
                          albumOwnerId : (NSString*) albumOwnerId
                               albumId : (NSString*) albumId
                             albumName : (NSString*) albumName
                                isHost : (BOOL) isHost;

@end

NS_ASSUME_NONNULL_END
