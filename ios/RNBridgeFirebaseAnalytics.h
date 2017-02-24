#import <Foundation/Foundation.h>

#import <React/RCTBridge.h>
#import <React/RCTConvert.h>
#import <React/RCTUtils.h>

@interface RNBridgeFirebaseAnalytics : NSObject

- (void)setUserId:(NSString*) userId;
- (void)setUserProperty:(NSString*)name property:(NSString*)property;
- (void)setEnabled:(BOOL)enabled;
- (void)logEvent:(NSString*)name property:(NSDictionary*)parameters;
- (void)reportCrash:(NSString*) message;

@end
