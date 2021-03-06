/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

@class NSArray, NSString, CalDAVPrincipal, MobileCalDAVAccount, CalDAVOperationQueue, DAVSession, NSRecursiveLock, NSError;



@interface CalDAVAccount : NSObject <CalNetworkChangeNotificationListener>
{
    CalDAVPrincipal *_principal;
    MobileCalDAVAccount *_mobileAccount;
    BOOL _isDelegate;
    BOOL _isWritable;
    NSString *_principalPath;
    NSString *_userDisplayName;
    NSString *_uid;
    DAVSession *_session;
    NSError *_lastOperationError;
    NSArray *_tempCalendarList;
    NSInteger _queryOfficeHoursRunning;
    NSRecursiveLock *_connectedStateLock;
    NSInteger _connectedState;
    BOOL _userPrefersOffline;
    NSError *_connectionError;
    CalDAVOperationQueue *_operationQueue;
    BOOL _checkingCredentials;
}


- (void)setPrincipal:(id)arg1;
- (id)principal;
- (id)mobileAccount;
- (void)setMobileAccount:(id)arg1;
- (id)initWithConfiguration:(id)arg1;
- (id)init;
- (id)configuration;
- (void)setupSources;
- (void)systemNetworkDidChange;
- (void)attemptAutomaticConnect;
- (void)attemptAutomaticConnectOnBackgroundThread;
- (void)automaticConnectDone:(id)arg1;
- (void)systemWillSleep;
- (void)systemDidWake;
- (void)dealloc;
- (id)operationQueue;
- (BOOL)isDelegate;
- (void)setIsDelegate:(BOOL)arg1;
- (BOOL)isWritable;
- (void)setIsWritable:(BOOL)arg1;
- (id)principalPath;
- (void)setPrincipalPath:(id)arg1;
- (id)fullPrincipalAddress;
- (void)setFullPrincipalAddress:(id)arg1;
- (id)login;
- (void)setLogin:(id)arg1;
- (id)displayName;
- (void)setDisplayName:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setUid:(id)arg1;
- (id)uid;
- (id)key;
- (void)setLastOperationError:(id)arg1;
- (id)lastOperationError;
- (void)updateSessionTimeout:(id)arg1;
- (id)_systemVersionString;
- (id)_icalendarVersionString;
- (id)_userAgentString;
- (id)session;
- (void)invalidateSession;
- (id)getStringForState:(NSInteger)arg1;
- (NSInteger)connectedState;
- (void)setConnectedState:(NSInteger)arg1;
- (NSInteger)statusForConnectedState;
- (BOOL)isBusy;
- (BOOL)userPrefersOffline;
- (void)setUserPrefersOffline:(BOOL)arg1;
- (BOOL)isOffline;
- (void)logError:(id)arg1;
- (void)setSourceError:(id)arg1;
- (void)doneCheckingCredentials:(BOOL)arg1;
- (void)refreshAllSources;
- (void)goOfflineAfterError:(BOOL)arg1;
- (BOOL)isTransientError:(id)arg1;
- (BOOL)isConnectionError:(id)arg1;
- (BOOL)isConnectionErrorForDAVError:(id)arg1;
- (BOOL)isConnectionErrorForAYError:(id)arg1;
- (BOOL)isConnectionErrorForOSStatusError:(id)arg1;
- (BOOL)isConnectionErrorForNSPosixError:(id)arg1;
- (BOOL)isConnectionErrorForAYNetDBError:(id)arg1;
- (BOOL)isConnectionErrorForStreamSocketSSLError:(id)arg1;
- (BOOL)isConnectionErrorForCFNetworkHTTPError:(id)arg1;
- (BOOL)isConnectionErrorForGenericError:(id)arg1;
- (BOOL)isRefreshing;
- (BOOL)isPendingRefresh;
- (void)cancelRefresh;
- (void)refreshForced:(BOOL)arg1 calendarsOnly:(BOOL)arg2;

@end
