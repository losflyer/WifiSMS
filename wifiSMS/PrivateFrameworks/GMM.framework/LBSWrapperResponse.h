/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

@class LBSGLocResponse;



@interface LBSWrapperResponse : PBCodable 
{
    NSInteger _status;
    BOOL _hasStatus;
    LBSGLocResponse *_reply;
}

@property(readonly) BOOL hasReply;
@property(retain) LBSGLocResponse *reply; /* unknown property attribute: V_reply */
@property(readonly) BOOL hasStatus; /* unknown property attribute: V_hasStatus */
@property NSInteger status; /* unknown property attribute: V_status */


- (id)init;
- (void)dealloc;
- (void)setStatus:(NSInteger)arg1;
- (BOOL)hasReply;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (id)description;
- (id)reply;
- (void)setReply:(id)arg1;
- (BOOL)hasStatus;
- (NSInteger)status;

@end
