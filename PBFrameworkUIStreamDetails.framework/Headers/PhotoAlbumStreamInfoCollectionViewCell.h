//
//  PhotoAlbumStreamInfoCollectionViewCell.h
//  PBPodUIStreamDetails
//
//  Created by Nikita Khodzhaiev on 25.10.2019.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface PhotoAlbumStreamInfoCollectionViewCell : UICollectionViewCell
@property (nonatomic, weak) IBOutlet UILabel *lblSharedLabel;
@property (nonatomic, weak) IBOutlet UILabel *lblPeopleParticipatingLabel;
@property (nonatomic, weak) IBOutlet UIView *vAudienceInfo;
@property (nonatomic, weak) IBOutlet UIView *vContributionInfo;
@property (nonatomic, weak) IBOutlet UIView *vSeparatorDot;
@property (nonatomic, weak) IBOutlet NSLayoutConstraint *lcAudienceInfoHeight;
@property (nonatomic, weak) IBOutlet NSLayoutConstraint *lcAudienceInfoTopSpace;
@property (nonatomic, weak) IBOutlet NSLayoutConstraint *lcContributionInfoHeight;
@property (nonatomic, weak) IBOutlet NSLayoutConstraint *lcContributionInfoTopSpace;
@property (nonatomic, weak) IBOutlet NSLayoutConstraint *lcAudienceInvitedWidth;


- (void) updateWithAlbum: (NSDictionary *) album
          numberOfPeople: (int) numberOfPeople
            participants: (int) participants
                isActive: (BOOL) isActive;

+ (float) heightForAlbum: (NSDictionary *) album
          numberOfPeople: (int) numberOfPeople
            participants: (int) participants
                isActive: (BOOL) isActive;

@end

NS_ASSUME_NONNULL_END
