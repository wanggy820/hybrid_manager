//
//  TJRouterManager.h
//  TJRouter_manager
//
//  Created by wanggy820 on 2020/11/20.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@protocol TJRouterManagerDelegate <NSObject>

@optional
//走原生网络请求
- (void)sendRequestWithURL:(NSString *)url params:(NSDictionary *)params completion:(void (^)(NSString *reponse, BOOL success, NSString *error))completion;

@end

@interface TJRouterManager : NSObject

@property (nonatomic, strong) NSMutableDictionary <NSString *, void (^)(id _Nullable result)>*completeCache;
@property (nonatomic, weak) id<TJRouterManagerDelegate> delegate;

+ (instancetype)sharedInstance;

@end

NS_ASSUME_NONNULL_END
