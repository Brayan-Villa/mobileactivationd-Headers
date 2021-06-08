/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, June 8, 2021 at 2:39:10 PM Central Daylight Time
                       * Operating System: Version 14.7 (Build 18G5023c)
                       * Image Source: /usr/libexec/mobileactivationd
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSURLSessionDataDelegate.h>

@class NSError, NSString;

@interface MANetworkServiceClientVersion : NSObject <NSURLSessionDataDelegate> {

	BOOL _allowInvalidCert;
	NSError* _lastNetworkError;

}

@property (assign) BOOL allowInvalidCert;                           //@synthesize allowInvalidCert=_allowInvalidCert - In the implementation block
@property (retain) NSError * lastNetworkError;                      //@synthesize lastNetworkError=_lastNetworkError - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)allowInvalidCert;
-(void)setAllowInvalidCert:(BOOL)arg1 ;
-(NSError *)lastNetworkError;
-(void)setLastNetworkError:(NSError *)arg1 ;
@end

