/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

@class NSArray, NSString, NSDictionary;



@interface VMULazySymbolOwner : NSObject 
{
    NSString *_name;
    NSDictionary *_signature;
    NSArray *_regions;
    NSUInteger _flags;
}

+ (id)lazySymbolOwnerWithName:(id)arg1 signature:(id)arg2 regions:(id)arg3 flags:(NSUInteger)arg4;

- (id)initWithName:(id)arg1 signature:(id)arg2 regions:(id)arg3 flags:(NSUInteger)arg4;
- (id)regions;
- (BOOL)isLazy;
- (BOOL)isProtected;
- (id)name;
- (id)signature;
- (id)path;
- (id)architecture;
- (BOOL)containsAddress:(unsigned long long)arg1;
- (BOOL)overlapsAddressRange:(struct _VMURange { unsigned long long x1; unsigned long long x2; })arg1;
- (BOOL)hasRegionsForName:(id)arg1;
- (NSUInteger)flags;
- (void)slideToSegmentAddresses:(id)arg1;
- (BOOL)validate;
- (id)description;
- (void)dealloc;

@end