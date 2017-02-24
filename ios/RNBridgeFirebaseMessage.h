#import <Foundation/Foundation.h>

#import <React/RCTBridge.h>
#import <React/RCTConvert.h>
#import <React/RCTUtils.h>

@interface RNBridgeFirebaseMessage : NSObject

- (void)registerDevice:(NSDictionary *)permissions resolver:(RCTPromiseResolveBlock)resolve rejecter:(RCTPromiseRejectBlock)reject;
- (void)subscribeToTopic:(NSString*) topic;
- (void)unsubscribeFromTopic:(NSString*) topic;

@end
