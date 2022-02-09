@import UIKit;

// Delegates
@protocol PhotoButlerPermissionDelegate <NSObject>
-(void)permissionDeniedCamera;
-(void)permissionDeniedLibrary;
@end

@protocol PhotoButlerNavigationDelegate <NSObject>
-(BOOL)navigateToViewController:(UIViewController*)vc;
@end

@interface PhotoButlerStreamDetails : NSObject {
    
}

// Requirements
-(void)initWithClientId:(NSString*)clientId clientKey:(NSString*)clientKey completion:(void (^)(BOOL success))completionBlock;
//-(void)restoreExistingUserSession:(NSString*)pbId completion:(void (^)(NSString *message))completionBlock;

// User
-(NSString*) getPBID;
-(void) setPBID:(NSString*)pbId;

// Uploads
+(void)startUploads;

// Customization
+(void)setNavigationBarColor:(UIColor*)tintColor;
+(void)setNavigationBarItemsColor:(UIColor*)tintColor;
+(void)setNavigationSubBarColor:(UIColor*)tintColor;
+(void)setNavigationSubBarItemsColor:(UIColor*)tintColor;
//+(void)setFontNameNormal:(NSString*)fontName;
//+(void)setFontNameMedium:(NSString*)fontName;
//+(void)setFontNameSemiBold:(NSString*)fontName;
//+(void)setFontNameBold:(NSString*)fontName;
+(void)setUsePhotoButlerPermissionsViews:(BOOL)usePBPermissions;
//-(void)showDebugLogs:(BOOL)showLogs;

// Facebook
+ (void)facebookApplication:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions;
+ (BOOL)facebookApplication:(UIApplication *)application openURL:(NSURL *)url options:(NSDictionary<UIApplicationOpenURLOptionsKey,id> *)options;
+ (void)facebookActivate;

@end
