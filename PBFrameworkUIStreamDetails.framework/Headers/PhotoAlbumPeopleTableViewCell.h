//
//  PhotoAlbumPeopleTableViewCell.h
//  AFNetworking
//
//  Created by Michael Liptuga on 09.10.2018.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@class PhotoAlbumPeopleTableViewCell;

@protocol PhotoAlbumPeopleTableViewCellDelegate <NSObject>

@optional

- (void) photoAlbumPeopleTableViewCell: (PhotoAlbumPeopleTableViewCell*) photoAlbumPeopleTableViewCell didSelectPerson : (NSDictionary*) person;

@end


@interface PhotoAlbumPeopleTableViewCell : UITableViewCell

@property (nonatomic, weak) id<PhotoAlbumPeopleTableViewCellDelegate> delegate;

+ (NSString*) cellID;

+ (id) cellNib;

+ (CGFloat) cellHeight;

- (void) configureWithPeopleCategoryTitle : (NSString*) peopleCategoryTitle
                                   people : (NSArray*) people
                             albumOwnerId : (NSString*) albumOwnerId
                                  albumId : (NSString*) albumId
                                albumName : (NSString*) albumName
                                   isHost : (BOOL) isHost;


@end

NS_ASSUME_NONNULL_END
