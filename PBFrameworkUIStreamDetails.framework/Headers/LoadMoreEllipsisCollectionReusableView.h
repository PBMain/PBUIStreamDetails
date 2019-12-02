//
//  LoadMoreEllipsisCollectionReusableView.h
//  PhotoButler
//
//  Created by Philippe Belley on 7/5/17.
//  Copyright © 2017 Photo Butler. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface LoadMoreEllipsisCollectionReusableView : UICollectionReusableView

@property (weak, nonatomic) IBOutlet UIView *vBackground;
@property (weak, nonatomic) IBOutlet UILabel *lblMoreImages;

@property (weak, nonatomic) IBOutlet UIButton *tappableAreaBtn;

- (void)makeBlankSpacer;
- (void)labelNumber: (NSUInteger)howManyMore;
@end
