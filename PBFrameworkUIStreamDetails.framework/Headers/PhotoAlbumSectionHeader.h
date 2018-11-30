//
//  PhotoAlbumSectionHeader.h
//  AFNetworking
//
//  Created by Michael Liptuga on 10/31/18.
//

#import <UIKit/UIKit.h>
#import "MoreButton.h"

typedef NS_ENUM(NSInteger,PhotoAlbumSectionHeaderType) {
    TopHighlightsSection,
    MomentsSection,
    LocationSection,
    BibSearch
};

NS_ASSUME_NONNULL_BEGIN

@interface PhotoAlbumSectionHeader : UICollectionReusableView

@property (weak, nonatomic) IBOutlet UILabel        *titleLabel;
@property (weak, nonatomic) IBOutlet UILabel        *subtitleLabel;

@property (weak, nonatomic) IBOutlet UIImageView    *dividerImageView;

@property (weak, nonatomic) IBOutlet MoreButton     *seeAllButton;

@property (nonatomic, assign) BOOL isButtonHidden;

+ (NSString*) sectionHeaderId;

+ (id) headerNib;

+ (CGSize) sizeForType : (PhotoAlbumSectionHeaderType) type;

+ (CGSize) sizeForType : (PhotoAlbumSectionHeaderType) type
              subtitle : (nullable NSString*) subtitle
            isExpanded : (BOOL) isExpanded;

- (void) configureWithTitle : (NSString*) title;

- (void) configureWithTitle : (NSString*) title
  buttonTitleForNormalState : (nullable NSString*) buttonTitleForNormalState
buttonTitleForSelectedState : (nullable NSString*) buttonTitleForSelectedState
                    handler : (nullable void (^)(BOOL isSelected)) handler;

- (void) configureWithTitle : (NSString*) title
                   subtitle : (nullable NSString*) subtitle
  buttonTitleForNormalState : (nullable NSString*) buttonTitleForNormalState
buttonTitleForSelectedState : (nullable NSString*) buttonTitleForSelectedState
                 isExpanded : (BOOL) isExpanded
                    handler : (nullable void (^)(BOOL isSelected)) handler;

@end

NS_ASSUME_NONNULL_END
