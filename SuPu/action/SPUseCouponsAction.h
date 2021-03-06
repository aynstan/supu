//
//  SPUseCouponsAction.h
//  SuPu
//
//  Created by 持创 on 13-3-29.
//  Copyright (c) 2013年 com.chichuang. All rights reserved.
//

#import "SPBaseAction.h"
#import "SPCouponsObject.h"
@protocol SPUseCouponsActionDelegate
-(NSDictionary *)onRequestUseCouponsAction;
-(void)onResponseUseCouponsActionDataSuccess:(SPCouponsObject *)l_data_orderList;
-(void)onResponseUseCouponsActionDataFail;
@end

@interface SPUseCouponsAction : SPBaseAction{
ASIHTTPRequest *m_request_orderList;
id<SPUseCouponsActionDelegate> m_delegate_orderList;
}
@property(nonatomic,assign)id<SPUseCouponsActionDelegate> m_delegate_orderList;

/**
 *	@brief	发出请求
 *
 *	发出用户信息请求
 */
-(void)requestPersonalInfomationData;

/**
 *	@brief	请求完成
 *
 *	asi请求完成回调函数
 *
 *	@param 	request 	请求对象
 */
-(void)onRequestPersonalInfomationDataFinishResponse:(ASIHTTPRequest*)request;

/**
 *	@brief	请求失败
 *
 *	asi请求失败回调函数
 *
 *	@param 	request 	请求对象
 */
-(void)onRequestPersonalInfomationDataFailResponse:(ASIHTTPRequest*)request;
@end
