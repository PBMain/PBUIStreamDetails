//
//  PBMapAnnotationView.h
//  AFNetworking
//
//  Created by Philippe Belley on 6/21/18.
//

#import <UIKit/UIKit.h>

@interface PBMapAnnotationView : UIView

@property (weak, nonatomic) IBOutlet UIImageView *image;
@property (weak, nonatomic) IBOutlet UIView *countView;
@property (weak, nonatomic) IBOutlet UILabel *countLbl;

@end
